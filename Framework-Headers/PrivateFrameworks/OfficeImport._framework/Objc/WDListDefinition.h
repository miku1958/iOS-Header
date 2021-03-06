//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfficeImport/NSCopying-Protocol.h>

@class NSMutableArray, NSString, WDDocument;

__attribute__((visibility("hidden")))
@interface WDListDefinition : NSObject <NSCopying>
{
    WDDocument *mDocument;
    int mListDefinitionId;
    NSString *mStyleId;
    NSString *mStyleRefId;
    int mType;
    NSMutableArray *mLevels;
}

@property (readonly, nonatomic) int listDefinitionId; // @synthesize listDefinitionId=mListDefinitionId;
@property (readonly, nonatomic) NSString *styleId; // @synthesize styleId=mStyleId;
@property (copy, nonatomic) NSString *styleRefId; // @synthesize styleRefId=mStyleRefId;

- (void).cxx_destruct;
- (id)addLevel;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithDocument:(id)arg1 listDefinitionId:(int)arg2 styleId:(id)arg3;
- (id)levelAt:(int)arg1;
- (int)levelCount;
- (void)removeLastLevel;
- (void)setType:(int)arg1;
- (int)type;

@end

