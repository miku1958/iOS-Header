//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClockKit/NSCopying-Protocol.h>

@class NSString, NSURL;

@interface CLKVideo : NSObject <NSCopying>
{
    NSString *_name;
    NSURL *_url;
}

@property (readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly, nonatomic) NSURL *url; // @dynamic url;

+ (id)_videoNamed:(id)arg1 bundle:(id)arg2 modifier:(id)arg3;
+ (id)videoNamed:(id)arg1;
+ (id)videoNamed:(id)arg1 bundle:(id)arg2;
+ (id)videoWithName:(id)arg1 url:(id)arg2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithName:(id)arg1 url:(id)arg2;

@end
