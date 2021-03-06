//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/NSSecureCoding-Protocol.h>

@class NSDate, NSString, NSURL;

@interface WBSRemoteHistoryItem : NSObject <NSSecureCoding>
{
    NSURL *_url;
    NSString *_title;
    NSDate *_lastVisitTime;
}

@property (readonly, nonatomic) NSDate *lastVisitTime; // @synthesize lastVisitTime=_lastVisitTime;
@property (readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property (readonly, nonatomic) NSURL *url; // @synthesize url=_url;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 title:(id)arg2 lastVisitTime:(id)arg3;

@end

