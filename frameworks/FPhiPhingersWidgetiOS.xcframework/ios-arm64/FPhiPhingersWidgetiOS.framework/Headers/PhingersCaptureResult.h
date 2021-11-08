//
//  PhingersCaptureResult.h
//  PhingersWidgetiOS
//
//  Created by Jose Carlos on 23/9/21.
//

#ifndef PhingersCaptureResult_h
#define PhingersCaptureResult_h

#import <UIKit/UIKit.h>
#import "FingerCaptureMetrics.h"

@interface PhingersCaptureResult:NSObject

typedef NS_ENUM(NSUInteger, PhingersFinishStatus) {
    
    FINISH_STATUS_OK,

    FINISH_STATUS_ERROR,

    FINISH_STATUS_CANCEL_BY_USER,

    FINISH_STATUS_TIMEOUT,
};

typedef NS_ENUM(NSUInteger, PhingersError) {
    
    ERROR_AUTOFOCUS_FAILURE,
    
    ERROR_CAMERA_FAILURE,
    
    ERROR_LICENSING_FAILURE,
    
    ERROR_PERMISSIONS_FAILURE,
    
    ERROR_FINGERPRINT_CAPTURE_FAILURE,
  
    ERROR_FINGERPRINT_TOO_LOW_QUALITY,
    
    ERROR_LIVENESS_FAILURE,
    
    ERROR_CONFIGURATION_FAILURE,
    
    ERROR_FINGERPRINT_TEMPLATE_IO_ERROR,
    
    ERROR_UNIQUE_USER_ID_NOT_SPECIFIED,
    
    ERROR_UNKNOWN,
    
};


/*!
 * @typedef onyxFingers
 * @brief List of fingers. 1 - Thumb, 2 - Pointer, 5 - Pinky
 */
typedef enum LocationFingers {
    LF_LEFT_1,
    LF_LEFT_2,
    LF_LEFT_3,
    LF_LEFT_4,
    LF_LEFT_5,
    LF_RIGHT_1,
    LF_RIGHT_2,
    LF_RIGHT_3,
    LF_RIGHT_4,
    LF_RIGHT_5
} LocationFingers;


@property (nonatomic) PhingersFinishStatus finishStatus;
@property (nonatomic) PhingersError exceptionType;
@property (nonatomic) NSString* exceptionMessage;
@property (nonatomic) NSMutableArray* rawFingerprintImages;
@property (nonatomic) NSMutableArray* processedFingerprintImages;
@property (nonatomic) NSMutableArray* enhancedFingerprintImages;
@property (nonatomic) NSMutableArray* blackWhiteProcessedFingerprintImages;
@property (nonatomic) NSMutableArray* wsqData;
@property (nonatomic) NSMutableArray* fingerprintTemplates;
@property (nonatomic) NSMutableArray* ISOFingerprintTemplates;
@property (nonatomic) FingerCaptureMetrics* captureMetrics;


- (id)init;

@end


#endif /* PhingersCaptureResult_h */
