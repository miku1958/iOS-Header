//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/NSObject-Protocol.h>

@protocol PKSessionDelegate;

@protocol PKSession <NSObject>

@property (weak, nonatomic) id<PKSessionDelegate> delegate;
@property (readonly, nonatomic) unsigned long long state;

- (void)endSession;
@end

