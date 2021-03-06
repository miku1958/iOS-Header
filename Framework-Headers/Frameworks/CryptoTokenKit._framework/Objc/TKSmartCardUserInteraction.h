//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CryptoTokenKit/NSSecureCoding-Protocol.h>

@protocol TKSmartCardUserInteractionDelegate;

@interface TKSmartCardUserInteraction : NSObject <NSSecureCoding>
{
    id<TKSmartCardUserInteractionDelegate> _delegate;
    double _initialTimeout;
    double _interactionTimeout;
}

@property (weak) id<TKSmartCardUserInteractionDelegate> delegate; // @synthesize delegate=_delegate;
@property double initialTimeout; // @synthesize initialTimeout=_initialTimeout;
@property double interactionTimeout; // @synthesize interactionTimeout=_interactionTimeout;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (BOOL)cancel;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)runWithReply:(CDUnknownBlockType)arg1;

@end

