//
//  Car.m
//  RealmTest
//
//  Created by Stepan Paholyk on 11/19/16.
//  Copyright © 2016 Stepan Paholyk. All rights reserved.
//

#import "Car.h"
#import "Person.h"

@implementation Car


+ (NSDictionary *)linkingObjectsProperties {
    return @{
             @"owners": [RLMPropertyDescriptor descriptorWithClass:Person.class propertyName:@"cars"]
             };
}

// Specify default values for properties

//+ (NSDictionary *)defaultPropertyValues
//{
//    return @{};
//}

// Specify properties to ignore (Realm won't persist these)

//+ (NSArray *)ignoredProperties
//{
//    return @[];
//}

@end
