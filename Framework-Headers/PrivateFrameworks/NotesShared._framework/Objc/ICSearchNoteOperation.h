//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NotesShared/ICSearchOperation.h>

@class ICNote;

@interface ICSearchNoteOperation : ICSearchOperation
{
}

@property (readonly, nonatomic) ICNote *note;

- (id)initWithNote:(id)arg1 searchString:(id)arg2;
- (unsigned long long)relevanceByPerformingSearch;

@end
