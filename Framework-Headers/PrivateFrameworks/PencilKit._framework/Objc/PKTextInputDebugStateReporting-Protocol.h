//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PencilKit/NSObject-Protocol.h>

@class UIViewController;

@protocol PKTextInputDebugStateReporting <NSObject>
- (void)reportDebugStateDescription:(void (^)(NSString *, NSString *))arg1;

@optional
- (BOOL)debugStateCanDisplayDetails;
- (UIViewController *)debugStateDetailViewController;
@end
