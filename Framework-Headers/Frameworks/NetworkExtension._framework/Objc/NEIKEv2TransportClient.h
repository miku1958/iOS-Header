//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NEIKEv2IKESPI;
@protocol NEIKEv2TransportDelegate;

@interface NEIKEv2TransportClient : NSObject
{
    BOOL _wildcard;
    NEIKEv2IKESPI *_clientSPI;
    id<NEIKEv2TransportDelegate> _delegate;
}

@property (strong) NEIKEv2IKESPI *clientSPI; // @synthesize clientSPI=_clientSPI;
@property (weak) id<NEIKEv2TransportDelegate> delegate; // @synthesize delegate=_delegate;
@property BOOL wildcard; // @synthesize wildcard=_wildcard;

- (void).cxx_destruct;
- (id)description;

@end
