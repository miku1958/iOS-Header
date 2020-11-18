//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MediaPlayer/NSCopying-Protocol.h>

@class NSArray;

@interface MPResponse : NSObject <NSCopying>
{
    BOOL _valid;
    id _request;
    NSArray *_middleware;
    id _builder;
}

@property (readonly, nonatomic) id builder; // @synthesize builder=_builder;
@property (copy, nonatomic) NSArray *middleware; // @synthesize middleware=_middleware;
@property (readonly, copy, nonatomic) id request; // @synthesize request=_request;
@property (readonly, nonatomic, getter=isValid) BOOL valid; // @synthesize valid=_valid;

+ (id)builderProtocol;
- (void).cxx_destruct;
- (id)chain;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithRequest:(id)arg1 middleware:(id)arg2;
- (void)invalidate;

@end

