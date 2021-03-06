//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/FATObject.h>

@class EDAMNoteFilter, NSNumber, NSString;

@interface EDAMSearchRecord : FATObject
{
    NSString *_userQuery;
    EDAMNoteFilter *_noteFilter;
    NSNumber *_searchScope;
    NSNumber *_searchTime;
    NSString *_selectedNoteGUID;
    NSNumber *_selectTime;
    NSNumber *_noteRank;
    NSNumber *_noteCount;
}

@property (strong, nonatomic) NSNumber *noteCount; // @synthesize noteCount=_noteCount;
@property (strong, nonatomic) EDAMNoteFilter *noteFilter; // @synthesize noteFilter=_noteFilter;
@property (strong, nonatomic) NSNumber *noteRank; // @synthesize noteRank=_noteRank;
@property (strong, nonatomic) NSNumber *searchScope; // @synthesize searchScope=_searchScope;
@property (strong, nonatomic) NSNumber *searchTime; // @synthesize searchTime=_searchTime;
@property (strong, nonatomic) NSNumber *selectTime; // @synthesize selectTime=_selectTime;
@property (strong, nonatomic) NSString *selectedNoteGUID; // @synthesize selectedNoteGUID=_selectedNoteGUID;
@property (strong, nonatomic) NSString *userQuery; // @synthesize userQuery=_userQuery;

+ (id)structFields;
+ (id)structName;
- (void).cxx_destruct;

@end

