//
//  PhingersCaptureWidget.h
//  PhingersWidgetiOS
//
//  Created by Jose Carlos on 23/9/21.
//

#ifndef PhingersCaptureWidget_h
#define PhingersCaptureWidget_h

#import <UIKit/UIKit.h>
#import "PhingersCaptureResult.h"
#import "PhingersCaptureConfiguration.h"
#import "PhingersCaptureProtocol.h"
 
@interface PhingersCaptureWidget:NSObject


@property PhingersCaptureResult* phingersResult;

- (id)captureWithConfiguration :(PhingersCaptureConfiguration*) configuration delegate:(id)delegate error:(NSError **)error;


@end

#endif /* PhingersCaptureWidget_h */
