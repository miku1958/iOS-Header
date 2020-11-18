//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MPAVErrorResolverDelegate;

@interface MPAVErrorResolver : NSObject
{
    id<MPAVErrorResolverDelegate> _delegate;
}

@property (weak, nonatomic) id<MPAVErrorResolverDelegate> delegate; // @synthesize delegate=_delegate;

- (void).cxx_destruct;
- (void)resolveError:(id)arg1;
- (void)sendDidResolveError:(id)arg1 withResolution:(long long)arg2;

@end

