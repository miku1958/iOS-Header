//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>

@protocol SXFormatInteractorDelegate, SXPresentationEnvironment;

@protocol SXFormatInteractor <NSObject>

@property (weak, nonatomic) id<SXFormatInteractorDelegate> delegate;

- (void)updateWithPresentationEnvironment:(id<SXPresentationEnvironment>)arg1;
@end

