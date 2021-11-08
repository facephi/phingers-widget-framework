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

    @property (nonatomic) UIViewController* currentView;
    @property (nonatomic) NSString* licenseKey;
    @property (nonatomic) bool returnRawImage;
    @property (nonatomic) bool returnProcessedImage;
    @property (nonatomic) bool returnWSQ;
    @property (nonatomic) bool returnFingerprintTemplate;
    @property (nonatomic) bool returnISOFingerprintTemplate;
    @property (nonatomic) bool useLiveness;
    @property (nonatomic) PhingersReticleOrientation reticleOrientation;
    @property (nonatomic) bool showLoadingSpinner;

@end


#endif /* PhingersCaptureConfiguration_h */
