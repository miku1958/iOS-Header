//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@protocol NSCopying><NSSecureCoding;

@protocol UITextInputMultiDocument <NSObject>

@optional
- (void)_clearToken:(id<NSCopying><NSSecureCoding>)arg1;
- (void)_preserveFocusWithToken:(id<NSCopying><NSSecureCoding>)arg1 destructively:(BOOL)arg2;
- (BOOL)_restoreFocusWithToken:(id<NSCopying><NSSecureCoding>)arg1;
- (void)_restoreFocusWithToken:(id<NSCopying><NSSecureCoding>)arg1 completion:(void (^)(BOOL))arg2;
@end

