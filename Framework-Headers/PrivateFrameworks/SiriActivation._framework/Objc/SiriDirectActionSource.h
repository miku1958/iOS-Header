//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriActivation/SiriActivationSource.h>

@protocol SiriDirectActionSourceDelegate;

@interface SiriDirectActionSource : SiriActivationSource
{
    id<SiriDirectActionSourceDelegate> _delegate;
}

@property (weak, nonatomic) id<SiriDirectActionSourceDelegate> delegate; // @synthesize delegate=_delegate;

- (void).cxx_destruct;
- (void)activateWithContext:(id)arg1;
- (void)activateWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (oneway void)canActivateChangedTo:(id)arg1;
- (void)configureConnection;
- (id)init;
- (id)initWithDelegate:(id)arg1;

@end
