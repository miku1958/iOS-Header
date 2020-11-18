//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSData, NSDictionary;

@protocol _SFPBTableColumnAlignment <NSObject>

@property (nonatomic) int columnAlignment;
@property (nonatomic) int dataAlignment;
@property (readonly, nonatomic) BOOL hasColumnAlignment;
@property (readonly, nonatomic) BOOL hasDataAlignment;
@property (readonly, nonatomic) BOOL hasIsEqualWidth;
@property (nonatomic) BOOL isEqualWidth;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

