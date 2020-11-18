//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCountedSet, NSError, NSMutableArray, NSMutableDictionary;

@interface ENSessionListNotebooksContext : NSObject
{
    NSMutableArray *_resultNotebooks;
    NSMutableArray *_linkedPersonalNotebooks;
    NSMutableDictionary *_sharedBusinessNotebooks;
    NSCountedSet *_sharedBusinessNotebookGuids;
    NSMutableDictionary *_businessNotebooks;
    NSMutableDictionary *_sharedNotebooks;
    long long _pendingSharedNotebooks;
    NSError *_error;
    CDUnknownBlockType _completion;
}

@property (strong, nonatomic) NSMutableDictionary *businessNotebooks; // @synthesize businessNotebooks=_businessNotebooks;
@property (copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property (strong, nonatomic) NSError *error; // @synthesize error=_error;
@property (strong, nonatomic) NSMutableArray *linkedPersonalNotebooks; // @synthesize linkedPersonalNotebooks=_linkedPersonalNotebooks;
@property (nonatomic) long long pendingSharedNotebooks; // @synthesize pendingSharedNotebooks=_pendingSharedNotebooks;
@property (strong, nonatomic) NSMutableArray *resultNotebooks; // @synthesize resultNotebooks=_resultNotebooks;
@property (strong, nonatomic) NSCountedSet *sharedBusinessNotebookGuids; // @synthesize sharedBusinessNotebookGuids=_sharedBusinessNotebookGuids;
@property (strong, nonatomic) NSMutableDictionary *sharedBusinessNotebooks; // @synthesize sharedBusinessNotebooks=_sharedBusinessNotebooks;
@property (strong, nonatomic) NSMutableDictionary *sharedNotebooks; // @synthesize sharedNotebooks=_sharedNotebooks;

- (void).cxx_destruct;

@end
