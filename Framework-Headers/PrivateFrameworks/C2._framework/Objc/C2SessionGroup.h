//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class C2Session, NSArray, NSString;

@interface C2SessionGroup : NSObject
{
    NSString *_configurationName;
    C2Session *_pinnedSessionAllowingExpiredDNS;
    C2Session *_pinnedSession;
    C2Session *_unpinnedSession;
}

@property (strong, nonatomic) NSString *configurationName; // @synthesize configurationName=_configurationName;
@property (readonly, nonatomic) BOOL isEmpty;
@property (strong, nonatomic) C2Session *pinnedSession; // @synthesize pinnedSession=_pinnedSession;
@property (strong, nonatomic) C2Session *pinnedSessionAllowingExpiredDNS; // @synthesize pinnedSessionAllowingExpiredDNS=_pinnedSessionAllowingExpiredDNS;
@property (readonly, nonatomic) NSArray *sessions;
@property (strong, nonatomic) C2Session *unpinnedSession; // @synthesize unpinnedSession=_unpinnedSession;

- (void).cxx_destruct;
- (id)initWithConfigurationName:(id)arg1;
- (BOOL)removeSession:(id)arg1;
- (id)sessionForOptions:(id)arg1;
- (void)setSession:(id)arg1 forOptions:(id)arg2;

@end

