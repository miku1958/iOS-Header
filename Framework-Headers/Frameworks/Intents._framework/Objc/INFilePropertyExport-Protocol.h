//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class INDateComponentsRange, INPerson, NSNumber, NSString;

@protocol INFilePropertyExport <NSObject, JSExport>

@property (copy, nonatomic) INDateComponentsRange *dateComponentsRange;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) INPerson *person;
@property (copy, nonatomic) NSString *qualifier;
@property (copy, nonatomic) NSNumber *quantity;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *value;

- (id)init;
@end

