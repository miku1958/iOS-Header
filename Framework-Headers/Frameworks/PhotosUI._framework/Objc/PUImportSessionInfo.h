//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSMutableArray;

@interface PUImportSessionInfo : NSObject
{
    BOOL _importComplete;
    BOOL _importStopped;
    NSDate *_startDate;
    NSDate *_endDate;
    NSArray *_itemsToImport;
    NSMutableArray *_importedItems;
    NSMutableArray *_errorItems;
    long long _completedItemsCount;
}

@property (nonatomic) long long completedItemsCount; // @synthesize completedItemsCount=_completedItemsCount;
@property (strong, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property (strong, nonatomic) NSMutableArray *errorItems; // @synthesize errorItems=_errorItems;
@property (nonatomic) BOOL importComplete; // @synthesize importComplete=_importComplete;
@property (nonatomic) BOOL importStopped; // @synthesize importStopped=_importStopped;
@property (strong, nonatomic) NSMutableArray *importedItems; // @synthesize importedItems=_importedItems;
@property (strong, nonatomic) NSArray *itemsToImport; // @synthesize itemsToImport=_itemsToImport;
@property (strong, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;

- (void).cxx_destruct;

@end

