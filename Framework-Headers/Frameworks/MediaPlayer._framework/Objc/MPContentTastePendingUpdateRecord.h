//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, NSUUID;

@interface MPContentTastePendingUpdateRecord : NSObject
{
    NSString *_playlistGlobalID;
    long long _storeAdamID;
    long long _tasteType;
    long long _type;
    NSUUID *_UUID;
}

@property (readonly, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
@property (readonly, nonatomic) NSString *playlistGlobalID; // @synthesize playlistGlobalID=_playlistGlobalID;
@property (readonly, nonatomic) long long storeAdamID; // @synthesize storeAdamID=_storeAdamID;
@property (readonly, nonatomic) long long tasteType; // @synthesize tasteType=_tasteType;
@property (readonly, nonatomic) long long type; // @synthesize type=_type;

- (void).cxx_destruct;
- (void)_initializeWithType:(long long)arg1 tasteType:(long long)arg2;
- (id)init;
- (id)initWithPlaylistGlobalID:(id)arg1 tasteType:(long long)arg2;
- (id)initWithStoreAdamID:(long long)arg1 tasteType:(long long)arg2;

@end

