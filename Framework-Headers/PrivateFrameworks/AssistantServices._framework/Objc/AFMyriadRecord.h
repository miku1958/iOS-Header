//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUUID;

@interface AFMyriadRecord : NSObject
{
    unsigned char _goodness;
    unsigned char _userConfidence;
    unsigned char _deviceGroup;
    unsigned char _deviceClass;
    unsigned char _tieBreaker;
    BOOL _isMe;
    unsigned short _pHash;
    NSUUID *_deviceID;
}

@property (nonatomic) unsigned char deviceClass; // @synthesize deviceClass=_deviceClass;
@property (nonatomic) unsigned char deviceGroup; // @synthesize deviceGroup=_deviceGroup;
@property (strong, nonatomic) NSUUID *deviceID; // @synthesize deviceID=_deviceID;
@property (nonatomic) unsigned char goodness; // @synthesize goodness=_goodness;
@property (nonatomic) BOOL isMe; // @synthesize isMe=_isMe;
@property (nonatomic) unsigned short pHash; // @synthesize pHash=_pHash;
@property (nonatomic) unsigned char tieBreaker; // @synthesize tieBreaker=_tieBreaker;
@property (nonatomic) unsigned char userConfidence; // @synthesize userConfidence=_userConfidence;

- (void).cxx_destruct;
- (void)adjustByMultiplier:(float)arg1 adding:(int)arg2;
- (id)asAdvertisementData;
- (id)description;
- (void)generateTiebreaker;
- (id)init;
- (id)initWithAudioData:(id)arg1;
- (id)initWithDeviceID:(id)arg1 data:(id)arg2;
- (BOOL)isAContinuation;
- (BOOL)isATrump;
- (BOOL)isAnEmergency;
- (BOOL)isAnEmergencyHandled;

@end

