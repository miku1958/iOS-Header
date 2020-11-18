//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface ICTableAttachmentSelection : NSObject
{
    BOOL _moving;
    BOOL _draggingText;
    unsigned long long _type;
    NSArray *_columns;
    NSArray *_rows;
}

@property (copy, nonatomic) NSArray *columns; // @synthesize columns=_columns;
@property (nonatomic) BOOL draggingText; // @synthesize draggingText=_draggingText;
@property (readonly, nonatomic) BOOL isRangeOrSpanningSelection;
@property (nonatomic) BOOL moving; // @synthesize moving=_moving;
@property (copy, nonatomic) NSArray *rows; // @synthesize rows=_rows;
@property (nonatomic) unsigned long long type; // @synthesize type=_type;
@property (readonly, nonatomic) BOOL valid;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (BOOL)removeColumns:(id)arg1 rows:(id)arg2;
- (BOOL)removeColumns:(id)arg1 rows:(id)arg2 previousColumns:(id)arg3 previousRows:(id)arg4;
- (void)selectCellAtColumn:(id)arg1 row:(id)arg2;
- (void)selectCellRangeAtColumns:(id)arg1 rows:(id)arg2;
- (void)selectColumns:(id)arg1;
- (void)selectRows:(id)arg1;
- (void)setSelectionEqualTo:(id)arg1;
- (void)unselect;

@end

