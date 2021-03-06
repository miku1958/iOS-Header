//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriVOX/NSObject-Protocol.h>

@class NSString;
@protocol SVXSystemVolumeListening;

@protocol SVXSystemVolumeDataSource <NSObject>
- (void)addVolumeListener:(id<SVXSystemVolumeListening>)arg1;
- (void)getVolumeForAudioCategory:(NSString *)arg1 completion:(void (^)(float))arg2;
- (void)removeVolumeListener:(id<SVXSystemVolumeListening>)arg1;
@end

