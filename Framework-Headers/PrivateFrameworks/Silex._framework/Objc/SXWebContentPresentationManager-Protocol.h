//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>

@protocol SXWebContentPresentationManager <NSObject>

@property (readonly, nonatomic) double height;
@property (copy, nonatomic, setter=onLoad:) CDUnknownBlockType loadBlock;
@property (copy, nonatomic, setter=onPresentable:) CDUnknownBlockType presentableBlock;
@property (nonatomic) unsigned long long presentationState;

- (void)refresh;
@end

