//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MFMailSignatureController : NSObject
{
}

- (id)_signatureStringForSender:(id)arg1;
- (void)addSignatureForSender:(id)arg1 bodyField:(id)arg2 prepend:(BOOL)arg3;
- (void)finalizeSignatureForBodyField:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)isDefaultSignatureForSender:(id)arg1;
- (void)removeSignatureForSender:(id)arg1 bodyField:(id)arg2;
- (void)updateSignatureForSender:(id)arg1 bodyField:(id)arg2;

@end

