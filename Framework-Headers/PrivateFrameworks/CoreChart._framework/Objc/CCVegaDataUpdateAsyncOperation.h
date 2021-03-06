//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreChart/CCAsyncOperation-Protocol.h>

@class CCVegaRenderer, NSArray, NSString;

@interface CCVegaDataUpdateAsyncOperation : NSObject <CCAsyncOperation>
{
    CCVegaRenderer *_renderer;
    NSString *_namedDataset;
    NSArray *_rowsToInsert;
    CDUnknownBlockType _callbackForRowsToRemove;
}

@property (copy) CDUnknownBlockType callbackForRowsToRemove; // @synthesize callbackForRowsToRemove=_callbackForRowsToRemove;
@property (strong) NSString *namedDataset; // @synthesize namedDataset=_namedDataset;
@property (weak, nonatomic) CCVegaRenderer *renderer; // @synthesize renderer=_renderer;
@property (strong) NSArray *rowsToInsert; // @synthesize rowsToInsert=_rowsToInsert;

- (void).cxx_destruct;
- (void)doDataUpdate:(CDUnknownBlockType)arg1;
- (void)performOperationWithCallback:(CDUnknownBlockType)arg1;

@end

