//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSIndexPath;

__attribute__((visibility("hidden")))
@interface _MapUpdate : NSObject
{
    BOOL _isSectionUpdate;
    BOOL _isInsert;
    BOOL _isDelete;
    BOOL _isMove;
    NSIndexPath *_indexPath;
    NSIndexPath *_moveFromIndexPath;
    NSIndexPath *_moveToIndexPath;
    long long _index;
    long long _section;
    long long _moveFromSection;
    long long _moveToSection;
    struct _NSRange _insertRange;
    struct _NSRange _deleteRange;
    struct _NSRange _moveFromRange;
    struct _NSRange _moveToRange;
}

@property (nonatomic) struct _NSRange deleteRange; // @synthesize deleteRange=_deleteRange;
@property (nonatomic) long long index; // @synthesize index=_index;
@property (strong, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property (nonatomic) struct _NSRange insertRange; // @synthesize insertRange=_insertRange;
@property (nonatomic) BOOL isDelete; // @synthesize isDelete=_isDelete;
@property (nonatomic) BOOL isInsert; // @synthesize isInsert=_isInsert;
@property (nonatomic) BOOL isMove; // @synthesize isMove=_isMove;
@property (nonatomic) BOOL isSectionUpdate; // @synthesize isSectionUpdate=_isSectionUpdate;
@property (strong, nonatomic) NSIndexPath *moveFromIndexPath; // @synthesize moveFromIndexPath=_moveFromIndexPath;
@property (nonatomic) struct _NSRange moveFromRange; // @synthesize moveFromRange=_moveFromRange;
@property (nonatomic) long long moveFromSection; // @synthesize moveFromSection=_moveFromSection;
@property (strong, nonatomic) NSIndexPath *moveToIndexPath; // @synthesize moveToIndexPath=_moveToIndexPath;
@property (nonatomic) struct _NSRange moveToRange; // @synthesize moveToRange=_moveToRange;
@property (nonatomic) long long moveToSection; // @synthesize moveToSection=_moveToSection;
@property (nonatomic) long long section; // @synthesize section=_section;

+ (id)itemDeleteItemAtIndexPath:(id)arg1 index:(long long)arg2;
+ (id)itemDeleteSection:(long long)arg1 deleteRange:(struct _NSRange)arg2;
+ (id)itemInsertItemAtIndexPath:(id)arg1 index:(long long)arg2;
+ (id)itemInsertSection:(long long)arg1 insertRange:(struct _NSRange)arg2;
+ (id)itemMoveFromIndexIndexPath:(id)arg1 toIndexPath:(id)arg2 fromIndex:(long long)arg3 toIndex:(long long)arg4;
+ (id)itemMoveSection:(long long)arg1 toSection:(long long)arg2 fromRange:(struct _NSRange)arg3 toRange:(struct _NSRange)arg4;
- (void).cxx_destruct;
- (id)description;
- (id)reverseUpdateItem;

@end

