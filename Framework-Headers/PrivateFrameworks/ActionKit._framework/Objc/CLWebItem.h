//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActionKit/NSCoding-Protocol.h>
#import <ActionKit/NSCopying-Protocol.h>

@class NSDate, NSString, NSURL, UIImage;

@interface CLWebItem : NSObject <NSCopying, NSCoding>
{
    NSString *_name;
    long long _type;
    NSURL *_contentURL;
    NSString *_mimeType;
    long long _viewCount;
    NSURL *_remoteURL;
    NSURL *_href;
    NSURL *_URL;
    NSURL *_iconURL;
    UIImage *_icon;
    BOOL _trashed;
    BOOL _private;
    NSDate *_createdAt;
    NSDate *_updatedAt;
    NSDate *_deletedAt;
}

@property (strong, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property (strong, nonatomic) NSURL *contentURL; // @synthesize contentURL=_contentURL;
@property (strong, nonatomic) NSDate *createdAt; // @synthesize createdAt=_createdAt;
@property (strong, nonatomic) NSDate *deletedAt; // @synthesize deletedAt=_deletedAt;
@property (strong, nonatomic) NSURL *href; // @synthesize href=_href;
@property (copy, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property (strong, nonatomic) NSURL *iconURL; // @synthesize iconURL=_iconURL;
@property (copy, nonatomic) NSString *mimeType; // @synthesize mimeType=_mimeType;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (nonatomic, getter=isPrivate) BOOL private; // @synthesize private=_private;
@property (strong, nonatomic) NSURL *remoteURL; // @synthesize remoteURL=_remoteURL;
@property (nonatomic, getter=isTrashed) BOOL trashed; // @synthesize trashed=_trashed;
@property (nonatomic) long long type; // @synthesize type=_type;
@property (strong, nonatomic) NSDate *updatedAt; // @synthesize updatedAt=_updatedAt;
@property (nonatomic) long long viewCount; // @synthesize viewCount=_viewCount;

+ (id)webItem;
+ (id)webItemWithName:(id)arg1;
+ (id)webItemWithName:(id)arg1 type:(long long)arg2 viewCount:(long long)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 type:(long long)arg2 viewCount:(long long)arg3;

@end

