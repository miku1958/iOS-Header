//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString;

@protocol SFDynamicURLImageResource <NSObject>

@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (copy, nonatomic) NSString *formatURL;
@property (copy, nonatomic) NSArray *imageOptions;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) double pixelHeight;
@property (nonatomic) double pixelWidth;
@property (nonatomic) BOOL supportsResizing;

@end

