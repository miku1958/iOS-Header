//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface IMOrderingTools : NSObject
{
    NSString *_jsonFilePath;
    NSMutableArray *_jsonArray;
}

@property (strong, nonatomic) NSMutableArray *jsonArray; // @synthesize jsonArray=_jsonArray;
@property (strong, nonatomic) NSString *jsonFilePath; // @synthesize jsonFilePath=_jsonFilePath;

- (void).cxx_destruct;
- (id)currentJsonArray;
- (id)messageDictionariesFromItemsInChat:(id)arg1 withEventKey:(id)arg2;
- (id)pathToDirectoryOfJSONFile;
- (void)printChangeInItemsToJSON:(id)arg1;
- (void)printChangeInItemsToJSONFromChat:(id)arg1;
- (void)setUpJSONFileForChatGUID:(id)arg1;
- (void)startTrackingChat:(id)arg1;
- (void)writeDataToJSONFile:(id)arg1;

@end

