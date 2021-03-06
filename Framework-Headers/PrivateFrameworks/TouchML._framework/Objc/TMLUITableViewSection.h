//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface TMLUITableViewSection : NSObject
{
    NSArray *_rows;
    NSString *_header;
    NSString *_footer;
}

@property (copy, nonatomic) NSString *footer; // @synthesize footer=_footer;
@property (copy, nonatomic) NSString *header; // @synthesize header=_header;
@property (readonly, nonatomic) long long numberOfRows;
@property (copy, nonatomic) NSArray *rows; // @synthesize rows=_rows;

- (void).cxx_destruct;
- (id)cellForRow:(long long)arg1;

@end

