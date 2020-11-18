//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUUID, _OSLogEventStoreTimeRef;

__attribute__((visibility("hidden")))
@interface _OSLogEventStoreMetadata : NSObject
{
    _OSLogEventStoreTimeRef *_ttls[5];
    _OSLogEventStoreTimeRef *_oldestPersist;
    _OSLogEventStoreTimeRef *_oldestSpecial;
    _OSLogEventStoreTimeRef *_oldestSignpost;
    _OSLogEventStoreTimeRef *_oldestHighVolume;
    _OSLogEventStoreTimeRef *_oldestLive;
    _OSLogEventStoreTimeRef *_end;
    NSUUID *_archiveUUID;
    NSUUID *_sourceUUID;
}

@property (readonly, nonatomic) NSUUID *archiveUUID; // @synthesize archiveUUID=_archiveUUID;
@property (readonly, nonatomic) _OSLogEventStoreTimeRef *end; // @synthesize end=_end;
@property (readonly, nonatomic) _OSLogEventStoreTimeRef *oldestHighVolume; // @synthesize oldestHighVolume=_oldestHighVolume;
@property (readonly, nonatomic) _OSLogEventStoreTimeRef *oldestLive; // @synthesize oldestLive=_oldestLive;
@property (readonly, nonatomic) _OSLogEventStoreTimeRef *oldestPersist; // @synthesize oldestPersist=_oldestPersist;
@property (readonly, nonatomic) _OSLogEventStoreTimeRef *oldestSignpost; // @synthesize oldestSignpost=_oldestSignpost;
@property (readonly, nonatomic) _OSLogEventStoreTimeRef *oldestSpecial; // @synthesize oldestSpecial=_oldestSpecial;
@property (readonly, nonatomic) NSUUID *sourceUUID; // @synthesize sourceUUID=_sourceUUID;

- (void).cxx_destruct;
- (id)initWithCollection:(id)arg1 localStorePlist:(id)arg2 liveDataDescriptor:(int)arg3;
- (id)initWithDictionary:(id)arg1;
- (id)timeRefForTTLClass:(unsigned char)arg1;

@end

