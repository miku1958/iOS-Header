//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NotesShared/TTParagraphStyle.h>

@class TTTodo;

@interface TTMutableParagraphStyle : TTParagraphStyle
{
}

@property (nonatomic) long long alignment; // @dynamic alignment;
@property (nonatomic) unsigned int hints; // @dynamic hints;
@property (nonatomic) unsigned long long indent; // @dynamic indent;
@property (nonatomic) BOOL needsListCleanup; // @dynamic needsListCleanup;
@property (nonatomic) BOOL needsParagraphCleanup; // @dynamic needsParagraphCleanup;
@property (nonatomic) unsigned long long startingItemNumber; // @dynamic startingItemNumber;
@property (nonatomic) unsigned int style; // @dynamic style;
@property (strong, nonatomic) TTTodo *todo; // @dynamic todo;
@property (nonatomic) long long writingDirection; // @dynamic writingDirection;

+ (id)paragraphStyleNamed:(unsigned int)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

