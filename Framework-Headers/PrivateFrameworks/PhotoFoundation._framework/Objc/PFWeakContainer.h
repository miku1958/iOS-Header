//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class _PFWeakContainerSentenal;

@interface PFWeakContainer : NSObject
{
    _PFWeakContainerSentenal *_sentenal;
    id _nilNotificationDelegate;
}

- (void)dealloc;
- (id)init;
- (BOOL)isTrackingWeakObjectDealloc:(id)arg1;
- (void)setNilNotificationDelegate:(id)arg1;
- (void)stopTrackingWeakObjectDealloc:(id)arg1;
- (void)trackWeakObjectDealloc:(id)arg1;
- (void)weakReferenceBecameNil;

@end

