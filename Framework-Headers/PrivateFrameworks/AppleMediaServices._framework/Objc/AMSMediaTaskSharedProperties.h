//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AMSURLSession;
@protocol AMSMediaTokenServiceProtocol;

__attribute__((visibility("hidden")))
@interface AMSMediaTaskSharedProperties : NSObject
{
    AMSURLSession *_session;
    id<AMSMediaTokenServiceProtocol> _tokenService;
}

@property (readonly, nonatomic) AMSURLSession *session; // @synthesize session=_session;
@property (readonly, nonatomic) id<AMSMediaTokenServiceProtocol> tokenService; // @synthesize tokenService=_tokenService;

+ (id)accessQueue;
+ (id)propertiesForMediaTask:(id)arg1;
+ (id)sharedPropertiesMapTable;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithMediaTask:(id)arg1;

@end
