//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CSSearchableIndex;

@interface IMINInteractionUtilities : NSObject
{
    CSSearchableIndex *_searchableIndex;
}

@property (strong, nonatomic) CSSearchableIndex *searchableIndex; // @synthesize searchableIndex=_searchableIndex;

+ (id)sharedInstance;
- (void)dealloc;
- (void)deleteInteractionsWithChatGUIDs:(id)arg1;
- (void)deleteInteractionsWithMessageGUIDs:(id)arg1;
- (id)init;

@end

