//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MediaPlayer/NSCopying-Protocol.h>

@class NSString;

@interface MPStoreContentReport : NSObject <NSCopying>
{
    NSString *_userId;
    NSString *_contentId;
    long long _concernItemType;
    NSString *_commentText;
    NSString *_aucType;
    NSString *_displayText;
    NSString *_concernTypeId;
}

@property (copy, nonatomic) NSString *aucType; // @synthesize aucType=_aucType;
@property (copy, nonatomic) NSString *commentText; // @synthesize commentText=_commentText;
@property (nonatomic) long long concernItemType; // @synthesize concernItemType=_concernItemType;
@property (copy, nonatomic) NSString *concernTypeId; // @synthesize concernTypeId=_concernTypeId;
@property (copy, nonatomic) NSString *contentId; // @synthesize contentId=_contentId;
@property (copy, nonatomic) NSString *displayText; // @synthesize displayText=_displayText;
@property (copy, nonatomic) NSString *userId; // @synthesize userId=_userId;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end
