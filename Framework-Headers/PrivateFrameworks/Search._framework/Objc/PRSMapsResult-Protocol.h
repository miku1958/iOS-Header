//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Search/PRSBaseResult-Protocol.h>

@class NSData, NSString, NSURL, PRSImage;

@protocol PRSMapsResult <PRSBaseResult>

@property (strong, nonatomic) NSString *card_title;
@property (strong, nonatomic) PRSImage *icon;
@property (strong, nonatomic) NSData *maps_data;
@property (strong, nonatomic) NSString *maps_data_type;
@property (strong, nonatomic) NSString *maps_result_type;
@property (strong, nonatomic) NSString *more;
@property (strong, nonatomic) NSURL *more_url;
@property (strong, nonatomic) NSString *section_header;
@property (strong, nonatomic) NSString *templateName;
@property (strong, nonatomic) NSString *title;


@optional
@end
