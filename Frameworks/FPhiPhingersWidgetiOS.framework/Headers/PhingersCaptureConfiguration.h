//
//  PhingersCaptureConfiguration.h
//  PhingersWidgetiOS
//
//  Created by Jose Carlos on 23/9/21.
//

#ifndef PhingersCaptureConfiguration_h
#define PhingersCaptureConfiguration_h

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, PhingersReticleOrientation) {
    
    RETICLE_ORIENTATION_LEFT,
    
   
    RETICLE_ORIENTATION_RIGHT,
    
   
    RETICLE_ORIENTATION_THUMB_PORTRAIT,
    
};


@interface PhingersCaptureConfiguration:NSObject

    -(id) init;

    /**
     * This method sets the ViewController
     */
    @property (nonatomic) UIViewController* currentView;

    /**
     * This method sets the Phingers license key.
     */
    @property (nonatomic) NSString* licenseKey;

    /**
     * This property sets whether or not to return the raw fingerprint image in the PhingersCaptureResult.
     */
    @property (nonatomic) bool returnRawImage;

    /**
     * This property sets whether or not to return the processed fingerprint image in the PhingersCaptureResult.
     */
    @property (nonatomic) bool returnProcessedImage;

    /**
     * This property sets whether or not to return the WSQ image in the PhingersCaptureResult.
     */
    @property (nonatomic) bool returnWSQ;

    /**
     * This property sets whether or not to return the fingerprint template in the PhingersCaptureResult.
     */
    @property (nonatomic) bool returnFingerprintTemplate;

    /**
     * This property sets whether or not to return the ISO fingerprint template in the PhingersCaptureResult.
     */
    @property (nonatomic) bool returnISOFingerprintTemplate;

    /**
     * This method sets the rotation amount for the image.
     * rotation an integer specifying the rotation amount (0, 90, 180, or 270 degrees).
     * only 90 degree rotations are supported for speed reasons.
     */
    @property int rotation;

    //@property CGSize cropSize;
    // @property float cropFactor;
    /**
     * This method sets whether to enable liveness detection
     */
    @property (nonatomic) bool useLiveness;

    /**
     * This method sets whether to use the flash
     */
    @property (nonatomic) bool useFlash;

    /**
     * This method sets the orientation of the reticle {@link PhingersReticleOrientation}
     */
    @property (nonatomic) PhingersReticleOrientation reticleOrientation;

    /**
     * This methods sets that the loading spinner should be shown.
     */
    @property (nonatomic) bool showLoadingSpinner;

@end


#endif /* PhingersCaptureConfiguration_h */
