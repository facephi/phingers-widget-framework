//
//  PhingersCaptureProtocol.h
//  PhingersWidgetiOS
//
//  Created by Jose Carlos on 23/9/21.
//

#ifndef PhingersCaptureProtocol_h
#define PhingersCaptureProtocol_h


#import <Foundation/Foundation.h>

@protocol PhingersCaptureProtocol <NSObject>
 
/**
    Invoked when the fingers capture process is finished.
    - Mandatory method
 */
-(void)fingersCaptureSuccess;

/**
    Invoked when the fingers capture process is finished.
    - Mandatory method
 */
-(void)fingersCaptureError;

@end

#endif /* PhingersCaptureProtocol_h */
