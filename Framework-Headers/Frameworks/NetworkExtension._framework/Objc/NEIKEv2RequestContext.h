//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NEIKEv2RequestContext : NSObject
{
    BOOL _requestInitiator;
    int _requestType;
}

@property (nonatomic) BOOL requestInitiator; // @synthesize requestInitiator=_requestInitiator;
@property (nonatomic) int requestType; // @synthesize requestType=_requestType;

- (id)description;
- (id)initWithRequestType:(int)arg1;
- (void)sendCallbackSuccess:(BOOL)arg1 session:(id)arg2;

@end

