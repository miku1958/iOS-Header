//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CUPairedPeer, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CUHomeKitFindPairedPeerContext : NSObject
{
    BOOL _triedAccessory;
    BOOL _triedHAP;
    CDUnknownBlockType _completion;
    NSString *_identifier;
    unsigned long long _options;
    CUPairedPeer *_pairedPeer;
    unsigned long long _startTicks;
    NSArray *_users;
    unsigned long long _userIndex;
    unsigned long long _userCount;
}

@property (copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property (strong, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (nonatomic) unsigned long long options; // @synthesize options=_options;
@property (strong, nonatomic) CUPairedPeer *pairedPeer; // @synthesize pairedPeer=_pairedPeer;
@property (nonatomic) unsigned long long startTicks; // @synthesize startTicks=_startTicks;
@property (nonatomic) BOOL triedAccessory; // @synthesize triedAccessory=_triedAccessory;
@property (nonatomic) BOOL triedHAP; // @synthesize triedHAP=_triedHAP;
@property (nonatomic) unsigned long long userCount; // @synthesize userCount=_userCount;
@property (nonatomic) unsigned long long userIndex; // @synthesize userIndex=_userIndex;
@property (strong, nonatomic) NSArray *users; // @synthesize users=_users;

- (void).cxx_destruct;

@end

