# LESCO-Bill-Manager

There will be 2 types of users, the customers who need to calculate the bill and the LESCO managers who need to assign rates to the units.

• If the user is the customer, he or she will need to input the number of units utilized according to the details mentioned below. The code will perform calculation according to
the entered units and output the final bill.

• If the user is the LESCO manager, he or she can set the prices of different values including peak rates, off-peak rates, meter rent, and service rent.

• The prices of consumed units are different for first 100 units, for next 200 units (101 to 300) and units from 301 onwards. Each of these 3 ranges will have their specific peak
and off-peak rates. Furthermore, the peak rates are 20% more than off-peak rates. 
                                                                                For example:
                                                                                    o For first 100 units:
                                                                                        ▪ Off-peak rate: 13.85
                                                                                        ▪ Peak-rate: 16.62 (13.85 + 20% of 13.85)
                                                                                    o For next 200 units i.e., 101 to 300:
                                                                                        ▪ Off-peak rate: 16.83
                                                                                        ▪ Peak-rate: 20.19 (16.83 + 20% of 16.83)
                                                                                    o For all units from 301 onwards:
                                                                                        ▪ Off-peak rate: 20.94
                                                                                        ▪ Peak-rate: 25.12 (20.94 + 20% of 20.94)

It is really important to imprint your first best impression to the manager. Hence, a well-designed interface always has a good impact on the user. So, you are required to properly design 2 interfaces for the ease of use of both customers and LESCO managers.
