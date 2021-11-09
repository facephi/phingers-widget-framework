//
//  FingerCaptureData.h
//  PhingersWidgetiOS
//
//  Created by Jose Carlos on 27/9/21.
//

#ifndef FingerCaptureData_h
#define FingerCaptureData_h

#import <UIKit/UIKit.h>

@interface PhingersCaptureData:NSObject

@property (nonatomic) UIImage* rawFingerprintImage;
@property (nonatomic) UIImage* processedFingerprintImage;
@property (nonatomic) UIImage* blackWhiteProcessedFingerprintImage;
@property (nonatomic) NSData* wsqData;
@property (nonatomic) NSData* fingerprintTemplates;
@property (nonatomic) NSData* ISOFingerprintTemplates;
@property (nonatomic) FingerCaptureMetrics* captureMetrics;


@end

#endif /* FingerCaptureData_h */
