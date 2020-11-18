//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSData, NSDictionary, NSString, _SFPBActionItem, _SFPBURL;

@protocol _SFPBTrack <NSObject>

@property (copy, nonatomic) NSString *duration;
@property (readonly, nonatomic) BOOL hasDuration;
@property (readonly, nonatomic) BOOL hasHighlighted;
@property (readonly, nonatomic) BOOL hasNumber;
@property (readonly, nonatomic) BOOL hasPlayAction;
@property (readonly, nonatomic) BOOL hasPreview;
@property (readonly, nonatomic) BOOL hasTitle;
@property (nonatomic) BOOL highlighted;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *number;
@property (strong, nonatomic) _SFPBActionItem *playAction;
@property (strong, nonatomic) _SFPBURL *preview;
@property (copy, nonatomic) NSString *title;

- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

