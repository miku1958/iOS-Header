//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBSelectionItem;

@protocol _INPBRefinementItem <NSObject>

@property (readonly, nonatomic) BOOL hasItem;
@property (readonly, nonatomic) BOOL hasSubKeyPath;
@property (strong, nonatomic) _INPBSelectionItem *item;
@property (copy, nonatomic) NSString *subKeyPath;

@end
