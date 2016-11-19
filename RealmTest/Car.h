//
//  Car.h
//  RealmTest
//
//  Created by Stepan Paholyk on 11/19/16.
//  Copyright © 2016 Stepan Paholyk. All rights reserved.
//

#import <Realm/Realm.h>
@class Person;

@interface Car : RLMObject
@property NSString *model;
@property Person * owner;
@end

// This protocol enables typed collections. i.e.:
// RLMArray<Car>
RLM_ARRAY_TYPE(Car)
