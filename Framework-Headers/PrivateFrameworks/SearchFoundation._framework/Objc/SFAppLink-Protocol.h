//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSData, NSDictionary, NSString, SFImage, SFPunchout;

@protocol SFAppLink <NSObject>

@property (strong, nonatomic) SFPunchout *appPunchout;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (strong, nonatomic) SFImage *image;
@property (nonatomic) int imageAlign;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *title;

@end
