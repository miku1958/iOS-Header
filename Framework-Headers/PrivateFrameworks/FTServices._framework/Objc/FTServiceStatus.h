//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FTServiceStatus : NSObject
{
    unsigned long long _supportedServicesFlags;
    int _supportedServicesToken;
    BOOL _blockPost;
}

@property (nonatomic) BOOL blockPost; // @synthesize blockPost=_blockPost;
@property (readonly, nonatomic) BOOL faceTimeAudioSupported;
@property (readonly, nonatomic) BOOL faceTimeMultiwaySupported;
@property (readonly, nonatomic) BOOL iMessageSupported;
@property unsigned long long supportedServicesFlags; // @synthesize supportedServicesFlags=_supportedServicesFlags;
@property (nonatomic) int supportedServicesToken; // @synthesize supportedServicesToken=_supportedServicesToken;

+ (id)sharedInstance;
- (void)_addObservers;
- (unsigned long long)_noCache_supportedServicesFlags;
- (void)_reload;
- (void)_removeObservers;
- (void)dealloc;
- (id)initPrivate;

@end
