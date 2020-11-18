//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSData, NSDictionary, NSString, NSURL, SFActionItem;

@protocol SFTrack <NSObject>

@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (copy, nonatomic) NSString *duration;
@property (nonatomic) BOOL highlighted;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *number;
@property (strong, nonatomic) SFActionItem *playAction;
@property (copy, nonatomic) NSURL *preview;
@property (copy, nonatomic) NSString *title;

@end

