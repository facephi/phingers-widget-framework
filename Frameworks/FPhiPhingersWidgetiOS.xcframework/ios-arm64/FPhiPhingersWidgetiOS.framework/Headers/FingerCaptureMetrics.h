//
//  FingerCaptureMetrics.h
//  PhingersWidgetiOS
//
//  Created by Jose Carlos on 27/9/21.
//

#ifndef FingerCaptureMetrics_h
#define FingerCaptureMetrics_h

@interface FingerCaptureMetrics:NSObject

@property float livenessConfidence;
@property NSMutableArray* nfiqMetrics;
@property float focusQuality;
@property float distanceToCenter;

- (id)initWithLivenessConfidence:(float) livenessConfidence nfiqMetrics:(NSMutableArray*)delegate focusQuality:(float)focusQuality distanceToCenter:(float)distanceToCenter;


- (float) getLivenessConfidence;
- (float) getFocusQuality;
- (float) getDistanceToCenter;
- (NSMutableArray *) getNfiqMetrics;

@end

#endif /* FingerCaptureMetrics_h */
