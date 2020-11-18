//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, UIUpdateItem;

__attribute__((visibility("hidden")))
@interface UITableViewUpdateGap : NSObject
{
    NSMutableArray *_deleteItems;
    NSMutableArray *_insertItems;
    struct {
        unsigned int hasAutomaticAnimationItems:1;
    } _gapFlags;
    UIUpdateItem *_firstUpdateItem;
    UIUpdateItem *_lastUpdateItem;
}

@property (readonly, nonatomic) NSArray *deleteItems; // @synthesize deleteItems=_deleteItems;
@property (strong, nonatomic) UIUpdateItem *firstUpdateItem; // @synthesize firstUpdateItem=_firstUpdateItem;
@property (readonly, nonatomic) BOOL hasAutomaticAnimationItems;
@property (readonly, nonatomic) BOOL hasInserts;
@property (readonly, nonatomic) NSArray *insertItems; // @synthesize insertItems=_insertItems;
@property (readonly, nonatomic) BOOL isDeleteBasedGap;
@property (readonly, nonatomic) BOOL isSectionBasedGap;
@property (strong, nonatomic) UIUpdateItem *lastUpdateItem; // @synthesize lastUpdateItem=_lastUpdateItem;
@property (readonly, nonatomic) NSArray *updateItems;

+ (id)gapWithUpdateItem:(id)arg1;
- (void).cxx_destruct;
- (void)addUpdateItem:(id)arg1;
- (id)description;
- (id)init;

@end

